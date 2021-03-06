/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXAction.h>

@class NSString;

@interface SXEmailAction : NSObject <SXAction> {

	NSString* _recipient;
	NSString* _subject;

}

@property (nonatomic,readonly) NSString * recipient;                //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                  //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)subject;
-(NSString *)recipient;
-(NSString *)type;
-(id)initWithRecipient:(id)arg1 subject:(id)arg2 ;
@end

