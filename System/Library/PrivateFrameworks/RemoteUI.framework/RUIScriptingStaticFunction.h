/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RUIScriptingStaticFunction : NSObject {

	int _JSPropertyAttributes;
	const char* _identifier;
	/*function pointer*/void* _function;

}

@property (assign,nonatomic) const char* identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* function;              //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) int JSPropertyAttributes;                        //@synthesize JSPropertyAttributes=_JSPropertyAttributes - In the implementation block
-(void)setIdentifier:(const char*)arg1 ;
-(void)setFunction:(/*function pointer*/void*)arg1 ;
-(const char*)identifier;
-(id)description;
-(/*function pointer*/void*)function;
-(int)JSPropertyAttributes;
-(void)setJSPropertyAttributes:(int)arg1 ;
@end
