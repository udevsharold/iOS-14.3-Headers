/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSDataObservable.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDataItem.h>
@class NSString;


@protocol IKJSDataItem <JSExport>
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * identifier; 
@required
+(id)makeDataItem:(id)arg1 :(id)arg2;
-(NSString *)identifier;
-(NSString *)type;

@end

#import <libobjc.A.dylib/_IKJSDataItemProxy.h>
#import <libobjc.A.dylib/_IKJSDataItem.h>

@class NSString, NSDictionary;

@interface IKJSDataItem : IKJSDataObservable <NSObject, IKJSDataItem, _IKJSDataItemProxy, _IKJSDataItem> {

	NSString* _type;
	NSString* _identifier;
	NSString* _prototypeIdentifier;

}

@property (nonatomic,readonly) NSDictionary * dataDictionary; 
@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * prototypeIdentifier;                 //@synthesize prototypeIdentifier=_prototypeIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
+(id)makeDataItem:(id)arg1 :(id)arg2 ;
-(id)init;
-(id)initWithType:(id)arg1 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithValue:(id)arg1 ;
-(NSString *)type;
-(NSDictionary *)dataDictionary;
-(NSString *)prototypeIdentifier;
-(id)asPrivateIKJSDataItem;
-(void)setPrototypeIdentifier:(NSString *)arg1 ;
@end
