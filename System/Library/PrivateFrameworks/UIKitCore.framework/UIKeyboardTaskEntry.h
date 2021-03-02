/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface UIKeyboardTaskEntry : NSObject <NSCopying> {

	/*^block*/id __task;
	NSArray* __creationStack;

}

@property (nonatomic,retain,readonly) NSArray * originatingStack;              //@synthesize _creationStack=__creationStack - In the implementation block
-(id)initWithTask:(/*^block*/id)arg1 ;
-(void)execute:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSArray *)originatingStack;
@end
