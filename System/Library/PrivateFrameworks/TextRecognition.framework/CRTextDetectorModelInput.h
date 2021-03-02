/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider> {

	CVBufferRef _data;

}

@property (assign,nonatomic) CVBufferRef data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(CVBufferRef)data;
-(void)setData:(CVBufferRef)arg1 ;
-(id)initWithData:(CVBufferRef)arg1 ;
@end
