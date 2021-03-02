/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface LPCSSVariable : NSObject {

	BOOL _important;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (getter=isImportant,nonatomic,readonly) BOOL important;              //@synthesize important=_important - In the implementation block
-(id)initWithName:(id)arg1 important:(BOOL)arg2 ;
-(id)variableByResolvingWithThemePath:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isImportant;
@end
