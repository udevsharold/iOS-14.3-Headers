/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {

	CoreDAVHrefItem* _href;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;              //@synthesize href=_href - In the implementation block
+(id)copyParseRules;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(void)write:(id)arg1 ;
-(id)description;
@end

