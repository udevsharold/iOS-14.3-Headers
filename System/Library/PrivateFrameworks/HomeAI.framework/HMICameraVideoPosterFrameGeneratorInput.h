/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeAI/HomeAI-Structs.h>
@interface HMICameraVideoPosterFrameGeneratorInput : NSObject {

	unsigned long long _frameHeight;
	SCD_Struct_HM3 _generationFrequency;

}

@property (readonly) SCD_Struct_HM3 generationFrequency;              //@synthesize generationFrequency=_generationFrequency - In the implementation block
@property (readonly) unsigned long long frameHeight;                  //@synthesize frameHeight=_frameHeight - In the implementation block
-(unsigned long long)frameHeight;
-(id)initWithGenerationFrequency:(SCD_Struct_HM3)arg1 andPosterFrameHeight:(unsigned long long)arg2 ;
-(SCD_Struct_HM3)generationFrequency;
@end
