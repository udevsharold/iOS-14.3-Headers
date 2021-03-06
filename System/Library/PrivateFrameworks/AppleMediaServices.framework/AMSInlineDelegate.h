/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, Protocol;

@interface AMSInlineDelegate : NSObject {

	NSMutableSet* _implementations;
	Protocol* _protocol;

}

@property (nonatomic,retain) NSMutableSet * implementations;              //@synthesize implementations=_implementations - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                         //@synthesize protocol=_protocol - In the implementation block
-(void)setProtocol:(Protocol *)arg1 ;
-(BOOL)implementOptionalInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(id)initWithProtocol:(id)arg1 ;
-(Protocol *)protocol;
-(void)dealloc;
-(NSMutableSet *)implementations;
-(id)_initWithProtocol:(id)arg1 ;
-(BOOL)_implementMethodWithSelector:(SEL)arg1 isRequired:(BOOL)arg2 isInstance:(BOOL)arg3 block:(id)arg4 ;
-(BOOL)implementOptionalClassMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(BOOL)implementRequiredClassMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(BOOL)implementRequiredInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(void)setImplementations:(NSMutableSet *)arg1 ;
@end

