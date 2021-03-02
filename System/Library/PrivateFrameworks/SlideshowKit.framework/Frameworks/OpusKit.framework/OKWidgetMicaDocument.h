/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSDictionary, CALayer, OKWidgetMicaView, OKWidgetMicaViewProxy, NSString;

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport, NSCopying> {

	NSData* _data;
	NSDictionary* _rootDictionary;
	CALayer* _rootLayer;
	NSDictionary* _publishedObjects;
	OKWidgetMicaView* _widgetMicaView;

}

@property (nonatomic,retain) NSData * data;                                       //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSDictionary * rootDictionary;                       //@synthesize rootDictionary=_rootDictionary - In the implementation block
@property (nonatomic,retain) CALayer * rootLayer;                                 //@synthesize rootLayer=_rootLayer - In the implementation block
@property (nonatomic,retain) NSDictionary * publishedObjects;                     //@synthesize publishedObjects=_publishedObjects - In the implementation block
@property (assign,nonatomic) OKWidgetMicaViewProxy * widgetMicaView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(id)publishedObjectNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CALayer *)rootLayer;
-(NSData *)data;
-(void)dealloc;
-(id)publishedObjectWithName:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setRootLayer:(CALayer *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(double)documentWidth;
-(double)documentHeight;
-(void)setWidgetMicaView:(OKWidgetMicaViewProxy *)arg1 ;
-(void)applySettings:(id)arg1 withResolution:(id)arg2 ;
-(void)loadMicaDocument;
-(void)setRootDictionary:(NSDictionary *)arg1 ;
-(void)setPublishedObjects:(NSDictionary *)arg1 ;
-(id)settingsForKey:(id)arg1 ;
-(OKWidgetMicaViewProxy *)widgetMicaView;
-(NSDictionary *)rootDictionary;
-(NSDictionary *)publishedObjects;
@end
