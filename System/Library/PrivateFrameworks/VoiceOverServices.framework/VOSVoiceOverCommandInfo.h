/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VOSVoiceOverCommandInfo : NSObject {

	NSDictionary* _brailleCommands;

}
-(id)localizedNameForCategory:(id)arg1 ;
-(void)_loadBrailleCommandsIfNecessary;
-(id)brailleVoiceOverCategories;
-(id)brailleCommandsForCategory:(id)arg1 ;
-(id)localizedNameForCommand:(id)arg1 ;
@end

