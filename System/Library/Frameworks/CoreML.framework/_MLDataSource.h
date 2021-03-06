/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@class NSDictionary, NSString;

@interface _MLDataSource : NSObject <ETDataProvider> {

	NSDictionary* _dataTensorDictionary;

}

@property (nonatomic,retain) NSDictionary * dataTensorDictionary;              //@synthesize dataTensorDictionary=_dataTensorDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithMLFeatureProvider:(id)arg1 forPrediction:(BOOL)arg2 neuralNetworkEngine:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)dataTensorDictionary;
-(void)setDataTensorDictionary:(NSDictionary *)arg1 ;
-(unsigned long long)numberOfDataPoints;
@end

