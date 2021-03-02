/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVTimedMetadataGroup.h>

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {

	AVTimedMetadataGroupInternal* _mutablePriv;

}

@property (assign,nonatomic) SCD_Struct_AV7 timeRange; 
@property (nonatomic,copy) NSArray * items; 
-(void)setItems:(NSArray *)arg1 ;
-(SCD_Struct_AV7)timeRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeRange:(SCD_Struct_AV7)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 timeRange:(SCD_Struct_AV7)arg2 ;
@end
