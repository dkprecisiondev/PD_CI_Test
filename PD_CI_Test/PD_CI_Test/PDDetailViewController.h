//
//  PDDetailViewController.h
//  PD_CI_Test
//
//  Created by David de Jesus on 11/5/13.
//  Copyright (c) 2013 Precision Development. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PDDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
