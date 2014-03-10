//
//  HillCell.h
//  tongva
//
//  Created by Jeff Dickey on 3/9/14.
//  Copyright (c) 2014 dickeyxxx. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Hill.h"

@interface HillCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UILabel *label;

- (Hill *)hill;
- (void)setHill:(Hill *)hill;

@end
