/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PPConnectionsLocationSourceDelegate;
@interface PPConnectionsSource : NSObject {

	id<PPConnectionsLocationSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PPConnectionsLocationSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)identifier;
-(void)setDelegate:(id<PPConnectionsLocationSourceDelegate>)arg1 ;
-(id<PPConnectionsLocationSourceDelegate>)delegate;
@end

