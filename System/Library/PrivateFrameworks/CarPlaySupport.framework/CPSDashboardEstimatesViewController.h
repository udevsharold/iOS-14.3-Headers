/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@protocol CPSSafeAreaDelegate;
@class CPSDashboardEstimatesView, UIView, NSLayoutConstraint, NSString;

@interface CPSDashboardEstimatesViewController : UIViewController <CPSNavigationDisplaying> {

	id<CPSSafeAreaDelegate> _safeAreaDelegate;
	CPSDashboardEstimatesView* _estimatesView;
	UIView* _platterView;
	NSLayoutConstraint* _platterBottomConstraint;

}

@property (nonatomic,retain) CPSDashboardEstimatesView * estimatesView;                    //@synthesize estimatesView=_estimatesView - In the implementation block
@property (nonatomic,retain) UIView * platterView;                                         //@synthesize platterView=_platterView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * platterBottomConstraint;                 //@synthesize platterBottomConstraint=_platterBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<CPSSafeAreaDelegate> safeAreaDelegate;              //@synthesize safeAreaDelegate=_safeAreaDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPlatterView:(UIView *)arg1 ;
-(UIView *)platterView;
-(UIEdgeInsets)_safeAreaInsets;
-(void)viewDidLoad;
-(void)updateTripEstimates:(id)arg1 ;
-(void)navigator:(id)arg1 didEndTrip:(BOOL)arg2 ;
-(void)setSafeAreaDelegate:(id<CPSSafeAreaDelegate>)arg1 ;
-(NSLayoutConstraint *)platterBottomConstraint;
-(void)setPlatterBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(CPSDashboardEstimatesView *)estimatesView;
-(id<CPSSafeAreaDelegate>)safeAreaDelegate;
-(void)setEstimatesView:(CPSDashboardEstimatesView *)arg1 ;
@end
