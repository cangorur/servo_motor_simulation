% initial values for basic parameters
warning off
load best_params.mat

params = [K R];
err_name = ["err_slope" "err_intercept"];
err_req = [0.001 0.001];
delta = [0.01*K 0.01*R];

total_error = 0.01;
iter = 0;
% [err_slope, err_intercept, in] = calc_err(params(1),params(2));
run calc_err_kr.m
best_err = [err_slope, err_intercept];
best_params = params;
% params = best_params;
err = 1;
disp ('Initial error: ')
disp(best_err)

while (err(1) > err_req(1) || err(2) > err_req(2))
    iter = iter +1;
    disp(['Iteration ',num2str(iter)])
    for index = 1:2
        if err(index) <= err_req(index)
            continue
        end
        % starting from the best results
        params(index) = best_params(index) + delta(index);
        K = params(1);
        R = params(2);
        %[err_slope, err_intercept, in] = calc_err(params(1),params(2));
        run calc_err_kr.m
        err(1) = err_slope;
        err(2) = err_intercept;
        if err(index) < best_err(index)
            disp('Currently is the BEST in terms of '+err_name(index)+'.') 
            best_err(index) = err(index);
            best_params(index) = params(index);
            delta(index)= delta(index)*1.1;
        else
            disp('While the best in terms of '+ err_name(index)+ ' is: ')
            disp(best_err(index))
            params(index) = params(index) - 2*delta(index);
            if params(index) <= 0
                params(index) = params(index) + delta(index);
                disp('param smaller or equal to 0, reverse.')
                delta(index) = delta(index)* 0.9;
                continue
            end
            K = params(1);
            R = params(2);
            %[err_slope, err_intercept, in] = calc_err(params(1),params(2));
            run calc_err_kr.m
            err(1) = err_slope;
            err(2) = err_intercept;
            if err(index) < best_err(index)
                disp('Currently is the BEST in terms of '+err_name(index)+'.')               
                best_err(index) = err(index);
                best_params(index) = params(index);
                delta(index)= delta(index)*1.1;
            else
                disp('While the best in terms of '+ err_name(index)+ ' is: ')
                disp(best_err(index))
                params(index) = params(index)+delta(index);
                delta(index) = delta(index)*0.9;
            end
        end
    end
end

% print final results
disp ("Parameter estimation stopping requirements reached.")
disp ("The best params [K R] are: ")
disp (best_params)
disp ("The coefficients [slope intercept rmse] are: ")
disp (Result)
disp ("The error [err_slope err_intercept within_err_range] are: ")
disp (Error)