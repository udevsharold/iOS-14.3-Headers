/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (nonatomic,readonly) NSArray * inputManagers; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)inputManagers;
-(BOOL)isValue:(id)arg1 equalToValue:(id)arg2 ;
-(id)fastCachedValue;
-(id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 ;
-(void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end
