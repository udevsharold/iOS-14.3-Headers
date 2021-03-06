/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICommand.h>

@class UICommand, UICommandAlternate;

@interface _UIValidatableCommand : UICommand {

	UICommand* _command;
	UICommandAlternate* _alternate;

}
-(id)init;
-(id)alternates;
-(id)propertyList;
-(SEL)action;
-(void)useCommand:(id)arg1 alternate:(id)arg2 ;
@end

