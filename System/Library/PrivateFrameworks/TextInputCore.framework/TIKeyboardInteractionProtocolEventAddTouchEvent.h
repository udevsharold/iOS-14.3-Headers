/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIKeyboardInteractionProtocolEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardTouchEvent, NSString;

@interface TIKeyboardInteractionProtocolEventAddTouchEvent : NSObject <TIKeyboardInteractionProtocolEvent, NSSecureCoding> {

	TIKeyboardTouchEvent* _touchEvent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)sendTo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTouchEvent:(id)arg1 ;
@end

