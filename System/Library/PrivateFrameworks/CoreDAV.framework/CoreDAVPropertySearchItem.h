/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, NSString;

@interface CoreDAVPropertySearchItem : CoreDAVItem {

	CoreDAVLeafItem* _prop;
	NSString* _match;
	NSString* _matchTypeAttribute;

}

@property (nonatomic,retain) CoreDAVLeafItem * prop;                     //@synthesize prop=_prop - In the implementation block
@property (nonatomic,retain) NSString * match;                           //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) NSString * matchTypeAttribute;              //@synthesize matchTypeAttribute=_matchTypeAttribute - In the implementation block
-(int)wellKnownPrincipalSearchType;
-(id)init;
-(CoreDAVLeafItem *)prop;
-(NSString *)match;
-(void)write:(id)arg1 ;
-(id)description;
-(void)setMatch:(NSString *)arg1 ;
-(void)setProp:(CoreDAVLeafItem *)arg1 ;
-(NSString *)matchTypeAttribute;
-(id)initWithSearchPropertyNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setMatchTypeAttribute:(NSString *)arg1 ;
@end

