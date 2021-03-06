/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <TextInputCore/TILanguageModelOfflineLearningHandle.h>

@interface TILanguageModelOfflineLearningHandleFavonius : TILanguageModelOfflineLearningHandle {

	RefPtr<KB::DictionaryContainer>* _dictionaries;
	shared_ptr<KB::LanguageModel>* _currentModel;

}

@property (assign,nonatomic) shared_ptr<KB::LanguageModel>* currentModel;                  //@synthesize currentModel=_currentModel - In the implementation block
@property (nonatomic,readonly) RefPtr<KB::DictionaryContainer>* dictionaries;              //@synthesize dictionaries=_dictionaries - In the implementation block
-(void)load;
-(id)initWithInputMode:(id)arg1 ;
-(void)setCurrentModel:(shared_ptr<KB::LanguageModel>*)arg1 ;
-(shared_ptr<KB::LanguageModel>*)currentModel;
-(void)didFinishLearning;
-(void)updateAdaptationContext:(id)arg1 ;
-(void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3 ;
-(RefPtr<KB::DictionaryContainer>*)dictionaries;
@end

