/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/_INExtension.h>

@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension {

	NSMutableArray* _recentIntentHandlers;

}
-(id)init;
-(id)handlerForIntent:(id)arg1 ;
-(id)existingHandlerForIntentIdentifier:(id)arg1 ;
-(void)updateRecentlyUsedHandlersWithHandler:(id)arg1 ;
@end
