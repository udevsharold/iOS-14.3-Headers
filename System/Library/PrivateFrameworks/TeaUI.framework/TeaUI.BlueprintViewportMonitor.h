/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/TUMotionManagerObserver.h>

@interface TeaUI.BlueprintViewportMonitor : NSObject <UICollectionViewDelegate, UITableViewDelegate, TUMotionManagerObserver> {

	 observers;
	 options;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)motionManager:(id)arg1 didUpdateMotionData:(id)arg2 ;
-(void)motionManager:(id)arg1 motionEnabled:(BOOL)arg2 ;
-(id)init;
@end
