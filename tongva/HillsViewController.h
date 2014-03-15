//
//  ViewController.h
//  tongva
//
//  Created by Jeff Dickey on 3/9/14.
//  Copyright (c) 2014 dickeyxxx. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "HillViewController.h"
#import "Hill.h"
#import "HillCell.h"

@interface HillsViewController : UIViewController {
    Hill *_currentHill;
}

- (void)showHill:(Hill *)hill;

@end
