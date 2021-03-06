/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARCommandTagger : NSObject {

	unique_ptr<quasar::CommandTagger, std::__1::default_delete<quasar::CommandTagger> >* _tagger;

}
+(void)initialize;
-(id)initWithConfiguration:(id)arg1 usage:(long long)arg2 ;
-(id)commandTaggingFromRecognitionResult:(id)arg1 activeCommands:(id)arg2 ;
-(id)parameterTagForIndex:(long long)arg1 ;
-(id)commandPhraseTagForIndex:(long long)arg1 ;
-(BOOL)isParameterTag:(id)arg1 ;
-(BOOL)isCommandPhraseTag:(id)arg1 ;
@end

