/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GKNoiseModule.h>

@class NSMutableArray, NSString;

@interface GKNoiseModifier : NSObject <GKNoiseModule> {

	NSMutableArray* _inputModules;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)inputModuleAtIndex:(int)arg1 ;
-(void)setInputModule:(id)arg1 atIndex:(int)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end

