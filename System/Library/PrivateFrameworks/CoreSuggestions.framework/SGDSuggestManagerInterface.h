/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGDSuggestManagerInterface : NSObject
+(void)initialize;
+(id)xpcInterface;
+(void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3 ;
+(void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3 ;
+(id)realtimeSuggestionsClasses;
+(void)_addSGXPCResponseToReplyWhitelistForMethods:(objc_method_description*)arg1 count:(unsigned)arg2 interface:(id)arg3 ;
+(void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2 ;
+(void)_registerWhitelistBlock:(/*^block*/id)arg1 forProtocol:(id)arg2 ;
+(id)xpcInterfaceForProtocol:(id)arg1 ;
+(void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3 ;
@end

