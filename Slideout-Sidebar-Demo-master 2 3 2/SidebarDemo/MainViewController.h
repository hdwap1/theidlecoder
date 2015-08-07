//
//  MainViewController.h
//  SidebarDemo
//
//  Created by Simon Ng on 10/11/14.
//  Copyright (c) 2014 AppCoda. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MainViewController : UIViewController <UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UIButton *aSearchtrip;
@property (weak, nonatomic) IBOutlet UIButton *aNearme;

@property (weak, nonatomic) IBOutlet UIButton *aAddtrip;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *aSearchbarbtn;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;
@end
