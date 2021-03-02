/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDropSession;
@interface _UIDragDestinationControllerSessionState : NSObject {

	int _state;
	id<UIDropSession> _dropSession;

}

@property (assign,nonatomic) int state;                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;              //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) BOOL isReordering; 
@property (nonatomic,readonly) BOOL isDragging; 
@property (nonatomic,readonly) BOOL isActive; 
-(id<UIDropSession>)dropSession;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(int)state;
-(BOOL)isReordering;
-(BOOL)isDragging;
-(id)description;
-(BOOL)isActive;
-(void)setState:(int)arg1 ;
@end
