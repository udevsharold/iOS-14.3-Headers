/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>
#import <libobjc.A.dylib/CNPropertyBestIDSValueQueryDelegate.h>

@class CNPropertyBestIDSValueQuery;

@interface CNPropertyFaceTimeAction : CNPropertyAction <CNPropertyBestIDSValueQueryDelegate> {

	long long _type;
	CNPropertyBestIDSValueQuery* _bestFaceTimeQuery;

}

@property (nonatomic,retain) CNPropertyBestIDSValueQuery * bestFaceTimeQuery;              //@synthesize bestFaceTimeQuery=_bestFaceTimeQuery - In the implementation block
@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
-(BOOL)canPerformAction;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setType:(long long)arg1 ;
-(void)dealloc;
-(long long)type;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(void)queryComplete;
-(void)_queryFaceTimeStatus;
-(CNPropertyBestIDSValueQuery *)bestFaceTimeQuery;
-(void)setBestFaceTimeQuery:(CNPropertyBestIDSValueQuery *)arg1 ;
@end

