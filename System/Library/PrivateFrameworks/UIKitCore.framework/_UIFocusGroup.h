/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFocusEnvironment;
@class NSString;

@interface _UIFocusGroup : NSObject {

	_UIFocusGroup* _parentGroup;
	id<UIFocusEnvironment> _rootEnvironment;
	NSString* _identifier;

}

@property (getter=_identifier,nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) _UIFocusGroup * parentGroup; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> rootEnvironment;              //@synthesize rootEnvironment=_rootEnvironment - In the implementation block
+(id)nullGroup;
+(id)invalidGroup;
-(id)_identifier;
-(BOOL)isEqualToFocusGroup:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(_UIFocusGroup *)parentGroup;
-(id)_commonAncestorWithGroup:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 rootEnvironment:(id)arg2 ;
-(id)childGroupWithIdentifier:(id)arg1 ;
-(id)childGroupWithIdentifier:(id)arg1 rootEnvironment:(id)arg2 ;
-(id<UIFocusEnvironment>)rootEnvironment;
@end

