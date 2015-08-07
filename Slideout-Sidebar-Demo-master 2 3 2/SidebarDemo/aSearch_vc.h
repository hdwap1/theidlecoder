//
//  aSearch_vc.h
//  SidebarDemo
//
//  Created by indianic on 03/08/15.
//  Copyright (c) 2015 AppCoda. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "aPlaceListCell.h"
#import "aScrollCell.h"
@interface aSearch_vc : UIViewController <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    NSArray *aPlaceData;
 
}
//-(void)centerScrollViewContents;
//-(void)scrollViewDoubleTapped:(UITapGestureRecognizer*)recognizer;
//-(void)scrollViewTwoFingerTapped:(UITapGestureRecognizer*)recognizer;
@property (weak, nonatomic) IBOutlet UICollectionView *AcollectionView;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *aSearchtripbarbtn;
@property (weak, nonatomic) IBOutlet UIScrollView *aScrollview;


@property (weak, nonatomic) IBOutlet UICollectionView *Acollectionviewslider;




@end
