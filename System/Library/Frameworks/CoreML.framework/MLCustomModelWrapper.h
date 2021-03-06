/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLModel.h>

@protocol MLCustomModel;
@class NSObject;

@interface MLCustomModelWrapper : MLModel {

	NSObject*<MLCustomModel> _customModel;

}

@property (retain) NSObject*<MLCustomModel> customModel;              //@synthesize customModel=_customModel - In the implementation block
-(id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setCustomModel:(NSObject*<MLCustomModel>)arg1 ;
-(id)initWithModelDescription:(id)arg1 customModel:(id)arg2 configuration:(id)arg3 ;
-(NSObject*<MLCustomModel>)customModel;
@end

