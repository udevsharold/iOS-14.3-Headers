/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet

@property (nonatomic,readonly) long long capacity; 
-(long long)capacity;
-(void)addValue:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(DataSet*)_data;
-(id)initWithCapacity:(long long)arg1 ;
-(void)appendDataSet:(id)arg1 ;
@end
