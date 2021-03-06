/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TILanguageModelOfflineLearningTask;


@protocol TILanguageModelOfflineLearningStrategy <NSObject>
@property (readonly) TILanguageModelOfflineLearningTask * learningTask; 
@required
-(TILanguageModelOfflineLearningTask *)learningTask;
-(BOOL)learnMessages:(id)arg1 withRecipientRecords:(id)arg2;
-(id)filterMessages:(id)arg1;
-(void)didFinishLearning;

@end

