/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@class NSString, NSDictionary, NSArray;

@interface VNImageAnalyzerCompoundRequestConfiguration : VNRequestConfiguration {

	NSString* _detectorType;
	NSDictionary* _detectorConfigurationOptions;
	NSArray* _originalRequestConfigurations;

}

@property (nonatomic,copy) NSString * detectorType;                                  //@synthesize detectorType=_detectorType - In the implementation block
@property (nonatomic,copy) NSDictionary * detectorConfigurationOptions;              //@synthesize detectorConfigurationOptions=_detectorConfigurationOptions - In the implementation block
@property (nonatomic,copy) NSArray * originalRequestConfigurations;                  //@synthesize originalRequestConfigurations=_originalRequestConfigurations - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)detectorConfigurationOptions;
-(void)setDetectorType:(NSString *)arg1 ;
-(void)setDetectorConfigurationOptions:(NSDictionary *)arg1 ;
-(NSArray *)originalRequestConfigurations;
-(void)setOriginalRequestConfigurations:(NSArray *)arg1 ;
-(NSString *)detectorType;
@end

