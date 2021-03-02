/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface backtapOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _model_output;

}

@property (nonatomic,retain) MLMultiArray * model_output;              //@synthesize model_output=_model_output - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(NSSet *)featureNames;
-(id)featureValueForName:(id)arg1 ;
-(id)initWithModel_output:(id)arg1 ;
-(MLMultiArray *)model_output;
-(void)setModel_output:(MLMultiArray *)arg1 ;
@end
