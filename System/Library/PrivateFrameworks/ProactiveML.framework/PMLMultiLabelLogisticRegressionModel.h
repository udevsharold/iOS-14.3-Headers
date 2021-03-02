/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLMultiLabelClassifierModelProtocol.h>
#import <libobjc.A.dylib/PMLPlistAndChunksSerializableProtocol.h>

@class NSArray, NSString;

@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol> {

	NSArray* _models;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)serialize;
-(id)initWithModels:(id)arg1 ;
-(id)predict:(id)arg1 ;
-(id)toPlistWithChunks:(id)arg1 ;
-(id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3 ;
-(unsigned long long)outputDimension;
-(id)initWithWeightsArray:(id)arg1 andIntercept:(BOOL)arg2 ;
@end
