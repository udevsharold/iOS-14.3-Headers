/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSArray, NSDictionary;


@protocol NUVideoProperties <NSObject>
@property (readonly) NSURL * url; 
@property (readonly) NSArray * metadata; 
@property (readonly) SCD_Struct_NU7 size; 
@property (readonly) SCD_Struct_NU7 originalSize; 
@property (readonly) SCD_Struct_NU8 cleanAperture; 
@property (readonly) SCD_Struct_NU8 originalCleanAperture; 
@property (readonly) long long orientation; 
@property (readonly) NSDictionary * colorProperties; 
@property (readonly) SCD_Struct_NU6 livePhotoKeyFrameTime; 
@property (readonly) SCD_Struct_NU6 duration; 
@required
-(NSArray *)metadata;
-(SCD_Struct_NU7)originalSize;
-(SCD_Struct_NU6)livePhotoKeyFrameTime;
-(SCD_Struct_NU7)size;
-(long long)orientation;
-(SCD_Struct_NU6)duration;
-(NSURL *)url;
-(SCD_Struct_NU8)cleanAperture;
-(SCD_Struct_NU8)originalCleanAperture;
-(NSDictionary *)colorProperties;

@end
