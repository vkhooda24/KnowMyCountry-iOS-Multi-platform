//
//  ProgressIndicatorView.swift
//  KnowYourCountry-iOS
//
//  Created by Vikram Hooda on 3/3/20.
//  Copyright © 2020 vkhooda24. All rights reserved.
//

import Foundation
import UIKit

var progressIndicatorView : UIView?

extension UIViewController {
    func showLoadingView(onView : UIView) {
        let spinnerView = UIView.init(frame: onView.bounds)
        spinnerView.backgroundColor = UIColor.init(red: 0.5, green: 0.5, blue: 0.5, alpha: 0.5)
        let ai = UIActivityIndicatorView.init(activityIndicatorStyle: .whiteLarge)
        ai.startAnimating()
        ai.center = spinnerView.center
        
        DispatchQueue.main.async {
            spinnerView.addSubview(ai)
            onView.addSubview(spinnerView)
        }
        
        progressIndicatorView = spinnerView
    }
    
    func removeLoadingView() {
        DispatchQueue.main.async {
            progressIndicatorView?.removeFromSuperview()
            progressIndicatorView = nil
        }
    }
}
