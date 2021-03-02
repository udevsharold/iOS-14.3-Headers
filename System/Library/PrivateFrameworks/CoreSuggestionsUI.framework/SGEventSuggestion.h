/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestionsUI/SGEventSuggestionBase.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventEditViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>

@class UIImage, NSString;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate> {

	UIImage* _calendarImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)calendarImage;
-(id)suggestionPrimaryAction;
-(id)suggestionAttributedSubtitle;
-(id)suggestionImage;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg1 ;
-(void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2 ;
-(void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(BOOL)arg2 ;
@end
