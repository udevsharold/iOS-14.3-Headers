/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSArray;

@interface EspressoDataFrame : NSObject {

	NSMutableDictionary* _inputAttachments;
	NSMutableDictionary* _outputAttachments;
	NSMutableDictionary* _groundTruthAttachments;
	NSString* _function_name;

}

@property (retain) NSMutableDictionary * inputAttachments;                    //@synthesize inputAttachments=_inputAttachments - In the implementation block
@property (retain) NSMutableDictionary * outputAttachments;                   //@synthesize outputAttachments=_outputAttachments - In the implementation block
@property (retain) NSMutableDictionary * groundTruthAttachments;              //@synthesize groundTruthAttachments=_groundTruthAttachments - In the implementation block
@property (retain) NSString * function_name;                                  //@synthesize function_name=_function_name - In the implementation block
@property (readonly) NSArray * inputAttachmentNames; 
@property (readonly) NSArray * outputAttachmentNames; 
@property (readonly) NSArray * groundTruthAttachmentNames; 
-(id)init;
-(id)getInputAttachment:(id)arg1 ;
-(id)getOutputAttachment:(id)arg1 ;
-(id)getGroundTruthAttachment:(id)arg1 ;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(id)getFunctionName;
-(NSArray *)inputAttachmentNames;
-(NSArray *)groundTruthAttachmentNames;
-(NSArray *)outputAttachmentNames;
-(NSMutableDictionary *)inputAttachments;
-(void)setInputAttachments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)outputAttachments;
-(void)setOutputAttachments:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)groundTruthAttachments;
-(NSString *)function_name;
-(void)setGroundTruthAttachments:(NSMutableDictionary *)arg1 ;
-(void)setFunction_name:(NSString *)arg1 ;
@end

