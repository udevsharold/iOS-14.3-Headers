/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPATrimOperation : IPAVideoOperation {

	SCD_Struct_IP1 _startTime;
	SCD_Struct_IP1 _endTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IP1 endTime;                //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IP2 trimRange; 
-(SCD_Struct_IP1)endTime;
-(SCD_Struct_IP2)trimRange;
-(id)settingsDictionary;
-(id)identifier;
-(SCD_Struct_IP1)startTime;
-(id)initWithStartTime:(SCD_Struct_IP1)arg1 endTime:(SCD_Struct_IP1)arg2 ;
-(id)debugDescription;
-(id)initWithOperation:(id)arg1 ;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(id)initWithTrimRange:(SCD_Struct_IP2)arg1 ;
-(id)trimRangeDictionary;
@end

