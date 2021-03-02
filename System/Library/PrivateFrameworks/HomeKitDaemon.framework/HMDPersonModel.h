/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSString, NSSet;

@interface HMDPersonModel : HMBModel

@property (retain) NSData * personLinksData; 
@property (retain) NSString * name; 
@property (copy) NSSet * personLinks; 
+(id)hmbProperties;
+(id)sentinelParentUUID;
-(id)initWithPerson:(id)arg1 ;
-(NSSet *)personLinks;
-(void)setPersonLinks:(NSSet *)arg1 ;
-(id)createPerson;
@end
