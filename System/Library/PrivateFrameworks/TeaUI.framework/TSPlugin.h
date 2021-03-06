/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TeaUI/TeaUI-Structs.h>
#import <libobjc.A.dylib/TUPluggableDelegate.h>

@interface TSPlugin : NSObject <TUPluggableDelegate> {

	 identifier;
	 delegate;
	 viewController;
	 layoutRevision;
	 layoutRevisionLock;
	 previousSize;
	 previousSizeLock;

}
-(void)pluggableViewController:(id)arg1 didChangeSizeTo:(CGSize)arg2 ;
-(id)init;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
@end

