/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class SXDataRecordStore, SXJSONArray;

@interface SXDataTableComponent : SXComponent

@property (nonatomic,readonly) SXDataRecordStore * data; 
@property (nonatomic,readonly) SXJSONArray * sortBy; 
@property (nonatomic,readonly) unsigned long long dataOrientation; 
@property (nonatomic,readonly) BOOL showDescriptorLabels; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(BOOL)showDescriptorLabels;
-(unsigned long long)dataOrientation;
-(SXJSONArray *)sortBy;
-(SXDataRecordStore *)data;
-(unsigned long long)dataOrientationWithValue:(id)arg1 withType:(int)arg2 ;
-(BOOL)showDescriptorLabelsWithValue:(id)arg1 withType:(int)arg2 ;
@end
