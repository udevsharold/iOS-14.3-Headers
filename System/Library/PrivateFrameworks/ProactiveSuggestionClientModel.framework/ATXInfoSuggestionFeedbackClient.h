/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASXPCClientHelper;

@interface ATXInfoSuggestionFeedbackClient : NSObject {

	_PASXPCClientHelper* _xpcClientHelper;

}
+(id)sharedInstance;
-(id)init;
-(void)stackDidRotateProactivelyForInfoSuggestion:(id)arg1 isStalenessRotation:(BOOL)arg2 ;
-(id)_init;
-(void)suggestionDismissed:(id)arg1 isDismissalLongTerm:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

