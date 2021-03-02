/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIKeyboardLayoutFactory : NSObject {

	void* _layoutsLibraryHandle;
	NSMutableDictionary* _internalCache;

}

@property (nonatomic,readonly) void* layoutsLibraryHandle;              //@synthesize layoutsLibraryHandle=_layoutsLibraryHandle - In the implementation block
@property (retain) NSMutableDictionary * internalCache;                 //@synthesize internalCache=_internalCache - In the implementation block
+(id)sharedKeyboardFactory;
+(id)layoutsFileName;
-(id)init;
-(void)setInternalCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)internalCache;
-(id)keyboardPrefixForWidth:(double)arg1 andEdge:(BOOL)arg2 ;
-(void*)layoutsLibraryHandle;
-(id)keyboardWithName:(id)arg1 inCache:(id)arg2 ;
@end
