/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class VN6Ac6Cyl5O5oK19HboyMBR;

@interface VN5xRo0q9Wz9Io02mmbtoLsConfiguration : VNImageBasedRequestConfiguration {

	VN6Ac6Cyl5O5oK19HboyMBR* inputSignatureprint;
	unsigned long long _imageSignatureprintType;
	unsigned long long _imageSignatureHashType;
	VN6Ac6Cyl5O5oK19HboyMBR* _inputSignatureprint;

}

@property (assign,nonatomic) unsigned long long imageSignatureprintType;               //@synthesize imageSignatureprintType=_imageSignatureprintType - In the implementation block
@property (assign,nonatomic) unsigned long long imageSignatureHashType;                //@synthesize imageSignatureHashType=_imageSignatureHashType - In the implementation block
@property (nonatomic,copy) VN6Ac6Cyl5O5oK19HboyMBR * inputSignatureprint;              //@synthesize inputSignatureprint=_inputSignatureprint - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInputSignatureprint:(VN6Ac6Cyl5O5oK19HboyMBR *)arg1 ;
-(VN6Ac6Cyl5O5oK19HboyMBR *)inputSignatureprint;
-(unsigned long long)imageSignatureprintType;
-(void)setImageSignatureprintType:(unsigned long long)arg1 ;
-(unsigned long long)imageSignatureHashType;
-(void)setImageSignatureHashType:(unsigned long long)arg1 ;
@end
