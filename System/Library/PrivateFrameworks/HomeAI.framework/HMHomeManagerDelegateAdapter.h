/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@class NSString;

@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate> {

	/*^block*/id _didUpdateHomes;

}

@property (copy) id didUpdateHomes;                                 //@synthesize didUpdateHomes=_didUpdateHomes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDidUpdateHomes:(id)arg1 ;
-(id)didUpdateHomes;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
@end
