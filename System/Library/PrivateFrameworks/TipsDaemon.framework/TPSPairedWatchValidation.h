/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TPSTargetingValidation.h>

@class NSUUID;

@interface TPSPairedWatchValidation : TPSTargetingValidation {

	NSUUID* _capability;

}

@property (nonatomic,copy) NSUUID * capability;              //@synthesize capability=_capability - In the implementation block
-(NSUUID *)capability;
-(void)setCapability:(NSUUID *)arg1 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithCapability:(id)arg1 ;
@end
